import os
from glob import glob
from setuptools import setup

package_name = 'warehouse_sim'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ros',
    maintainer_email='your_email@example.com',
    description='Warehouse simulation with Tugbot',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [],
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),

        # Explicitly add the SLAM launch file
        ('share/' + package_name + '/launch', ['launch/warehouse_slam.launch.py']),

        # Automatically include any other launch/world/config files
        ('share/' + package_name + '/launch', glob('launch/*.py')),
        ('share/' + package_name + '/worlds', glob('worlds/*.world')),
        ('share/' + package_name + '/config', glob('config/*.yaml')),
        ('share/' + package_name + '/models', glob('models/**/*', recursive=True)),
        ('share/' + package_name + '/urdf', glob('urdf/*.urdf')),


    ],
)
