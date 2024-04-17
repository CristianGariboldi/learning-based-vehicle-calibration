from setuptools import find_packages
from setuptools import setup

setup(
    name='learning_based_vehicle_calibration',
    version='2.0.0',
    packages=find_packages(
        include=('learning_based_vehicle_calibration', 'learning_based_vehicle_calibration.*')),
)
