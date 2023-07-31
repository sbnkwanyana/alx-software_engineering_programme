#!/usr/bin/python3
"""
"""

from base import Base


class Rectangle(Base):
	"""
	"""
	def __init__(self, width, height, x=0, y=0, id=None):
		"""
		"""
		self.width = width
		self.height = height
		self.x = x
		self.y = y
		super().__init__(id)
		
	@property
	def width(self):
		"""
		"""
		return self.__width
	
	@width.setter
	def width(self, value):
		"""
		"""
		if type(value) is not int:
			raise TypeError("width must be an integer")
		if value <= 0:
			raise ValueError("width must be > 0")
		self.__width = value
	
	@property
	def height(self):
		"""
		"""
		return self.__height

	@height.setter
	def height(self, value):
		"""
		"""
		if type(value) is not int:
			raise TypeError("height must be an integer")
		if value <= 0:
			raise ValueError("height must be > 0")
		self.__height = value

	@property
	def x(self):
		"""
		"""
		return self.__x
	
	@x.setter
	def x(self, value):
		"""
		"""
		if type(value) is not int:
			raise TypeError("x must be an integer")
		if value < 0:
			raise ValueError("x must be >= 0")
		self.__x = value

	@property
	def y(self):
		"""
		"""
		return self.__y

	@y.setter
	def y(self, value):
		"""
		"""
		if type(value) is not int:
			raise TypeError("y must be an integer")
		if value < 0:
			raise ValueError("y must be >= 0")
		self.__y = value

	def area(self):
		"""
		"""
		return self.__width * self.__height

	def display(self):
		"""
		"""
		i = 0
		j = 0
		#[print("") for y in range(self.y)]
		while i < self.__height:
			#[print(" ", end="") for x in range(self.x)]
			while j < self.__width:
				print("#")
				j += 1
			if i != self.__height - 1:
				print("\n")
			j = 0
			i += 1

	def __str__(self):
		"""
		"""
		return ("[Rectangle] ({}) {}/{} - {}/{}".format(self.id, self.__x, self.__y, self.__width, self.__height))
    
	def update(self, *args, **kwargs):
		"""
		"""
		if args and len(args) != 0:
			a = 0
			for arg in args:
				if a == 0:
					if arg is None:
						self.__init__(self.width, self.height, self.x, self.y)
					else:
						self.id = arg
				elif a == 1:
					self.width = arg
				elif a == 2:
					self.height = arg
				elif a == 3:
					self.x = arg
				elif a == 4:
					self.y = arg
				a += 1

		elif kwargs and len(kwargs) != 0:
			for k, v in kwargs.items():
				if k == "id":
					if v is None:
						self.__init__(self.width, self.height, self.x, self.y)
					else:
						self.id = v
				elif k == "width":
					self.width = v
				elif k == "height":
					self.height = v
				elif k == "x":
					self.x = v
				elif k == "y":
					self.y = v

	def to_dictionary(self):
		"""
		"""
		return { "id":self.id, "width":self.__width, "height":self.__height, "x":self.__x, "y":self.__y }