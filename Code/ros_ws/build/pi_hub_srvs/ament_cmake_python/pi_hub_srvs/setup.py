from setuptools import find_packages
from setuptools import setup

setup(
    name='pi_hub_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('pi_hub_srvs', 'pi_hub_srvs.*')),
)
