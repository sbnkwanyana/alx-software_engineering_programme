#!/usr/bin/python3
"""
Starts a flask web application
"""

from flask import Flask
from flask import render_template
from models import storage
from models.state import State
app = Flask(__name__)


@app.route("/cities_by_states", strict_slashes=False)
def cities_by_state():
    """
    retrieves all cities and lists them by state
    """
    states = storage.all(State).values()
    return render_template("8-cities_by_states.html", states=states)


@app.teardown_appcontext
def teardown(exc):
    """removes the current SQLAlchemy session"""
    storage.close()


if __name__ == '__main__':
    app.run(host='0.0.0.0', port='5000')
