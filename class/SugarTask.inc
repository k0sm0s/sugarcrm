<?php

class SugarTask extends SugarModel{
    private $module_name = 'Tasks';
    private $date_due_flag;
    private $date_due;
    private $date_start_flag;
    private $contact_id;
    private $priority;
    private $old_author_c;
    private $opgavetype_c;

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