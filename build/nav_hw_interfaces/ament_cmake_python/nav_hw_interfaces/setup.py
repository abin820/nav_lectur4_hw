from setuptools import find_packages
from setuptools import setup

setup(
    name='nav_hw_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('nav_hw_interfaces', 'nav_hw_interfaces.*')),
)
