<?php

class SugarCall extends SugarModel{
    private $module_name = 'Calls';
    private $date_modified;
    private $duration_hours;
    private $duration_minutes;
    private $date_end;
    private $direction;
    private $reminder_time;
    private $outlook_id;
    private $call_id_c;
    private $rec_id_c;
    private $repeat_type_c;
    private $repeat_days_c;
    private $repeat_end_date_c;
    private $repeat_interval_c;
    private $test_c;
    private $google_mresponse_c;

    function __set($name, $value)
    {
        if(property_exists($this, $name))
            $this->$name = $value;
    }

    function __get($name)
    {
        if(property_exists($this, $name))
            return $this->$name;
    }
}
