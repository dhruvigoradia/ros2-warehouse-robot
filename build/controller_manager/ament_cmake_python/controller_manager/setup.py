from setuptools import find_packages
from setuptools import setup

setup(
    name='controller_manager',
    version='4.27.0',
    packages=find_packages(
        include=('controller_manager', 'controller_manager.*')),
)
