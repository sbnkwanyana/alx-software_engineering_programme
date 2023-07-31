#!/usr/bin/python3
"""
Starts a flask application
"""

from flask import Flask
from flask import render_template
app = Flask(__name__)


@app.route('/', strict_slashes=False)
def hello_hbnb():
    """
    returns Hello HBNB for home route
    """
    return 'Hello HBNB!'


@app.route('/hbnb', strict_slashes=False)
def display_hbnb():
    """
    responds to route /hbnb and returns literal HBNB
    """
    return 'HBNB'


@app.route('/c/<text>', strict_slashes=False)
def c_is_fun(text):
    """
    reponds to the url /c and accepts parameter and returns
    the literal in the format 'c {text}'
    """
    text = text.replace('_', " ")
    return 'C {}'.format(text)


@app.route('/python/', strict_slashes=False)
@app.route('/python/<text>', strict_slashes=False)
def python_is_cool(text='is cool'):
    """
    python route responds to multiple routes and returns default text
    for root request and custom text for paramertised url requests
    """
    text = text.replace('_', " ")
    return 'Python {}'.format(text)


@app.route('/number/<int:number>', strict_slashes=False)
def is_it_a_number(number):
    """
    Displays the value of the parameter only if its a digit type
    """
    return '{:d} is a number'.format(number)


@app.route('/number_template/<int:number>', strict_slashes=False)
def number_template(number):
    """
    renders an html page with passing in the number
    """
    return render_template('5-number.html', number=number)


@app.route('/number_odd_or_even/<int:number>', strict_slashes=False)
def odd_or_even(number):
    """
    renders html page chnaging the output based on the number being even or odd
    """
    return render_template('6-number_odd_or_even.html', number=number)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port='5000')
