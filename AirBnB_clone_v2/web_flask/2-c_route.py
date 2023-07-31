#!/usr/bin/python3
"""
Starts a flask application
"""

from flask import Flask
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


if __name__ == '__main__':
    app.run(host='0.0.0.0', port='5000')
