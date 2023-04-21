import yaml

with open("../config/pflanzenkisterl_conf.yaml", "r") as stream:
    try:
        print(yaml.safe_load(stream))
    except yaml.YAMLError as exc:
        print(exc)