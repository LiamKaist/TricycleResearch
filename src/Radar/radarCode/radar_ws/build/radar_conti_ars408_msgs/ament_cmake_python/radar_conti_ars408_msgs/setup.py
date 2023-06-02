from setuptools import find_packages
from setuptools import setup

setup(
    name='radar_conti_ars408_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('radar_conti_ars408_msgs', 'radar_conti_ars408_msgs.*')),
)
