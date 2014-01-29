<?php

abstract class SugarModel {
    protected $id;
    protected $assigned_user_name;
    protected $modified_by_name;
    protected $created_by_name;
    protected $name;
    protected $date_entered;
    protected $modified_user_id;
    protected $modified_user_name;
    protected $created_by;
    protected $description;
    protected $deleted;
    protected $assigned_user_id;
    protected $status;
    protected $date_start;
    protected $parent_type;
    protected $parent_id;
    protected $contact_name;
    protected $google_response_c;
    protected $old_id_c;
    protected $old_published_c;
    protected $old_updated_c;
    protected $old_link_alt_c;
    protected $old_link_self_c;
    protected $old_link_edit_c;
    protected $old_email_c;
    protected $g_published_c;
    protected $g_updated_c;

    function __construct($data)
    {
        foreach ($data as $d) {
            $this->$d['name'] = $d['value'];
        }

    }


} 