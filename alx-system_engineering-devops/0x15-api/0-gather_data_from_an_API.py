#!/usr/bin/python3
"""
Script that, using API, for a given employee ID o retrieve completed todo list
"""
import requests
import sys


if __name__ == "__main__":
    api_url = "https://jsonplaceholder.typicode.com"
    employee_id = sys.argv[1]
    employee = requests.get(api_url + "/users/{}".format(employee_id)).json()
    todo = requests.get(
        api_url + "/todos/", params={"userId": employee_id}).json()
    done = [tsk.get("title") for tsk in todo if tsk.get("completed") is True]
    name = employee.get("name")
    number_of_done_tasks = len(done)
    total_number_tasks = len(todo)
    print("Employee {} is done with tasks({}/{}):".format(
        name, number_of_done_tasks, total_number_tasks
    ))
    for task in done:
        print(f"\t{task}")
