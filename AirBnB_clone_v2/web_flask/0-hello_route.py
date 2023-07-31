#!/usr/bin/python3
"""
Starts a flask application printing 'Hello HBNB' for home route
"""

from flask import Flask
app = Flask(__name__)


@app.route('/', strict_slashes=False)
def hello_hbnb():
    """
    returns Hello HBNB for home route
    """
    return 'Hello HBNB!'


if __name__ == '__main__':
    app.run(host='0.0.0.0', port='5000')
