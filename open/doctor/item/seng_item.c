// doctorר�ÿ���make��ѩ����...
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("�������Q",({"seng item","item"}) );
        set("long",
        "������������������Զ��̩ɽ������֮��ҩ,���Զ�����������������Ч.\n"+
        "�����뾭ҽ������(make),���ɷ�����ҩЧ.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",2500);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
        if( this_player()==environment() )
         add_action("make_item","make");
}

int make_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="seng item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴɸ�ҩ!!\n");
       cure = user->query_skill("cure");
       cure = cure /4;
        if( cure > 10)
        {
          message_vision("$N���Ž������˲��Ƴ�ѩ����.\n", user);
          ob=new("/open/common/obj/plaster1");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷����˲��Ƴ�ѩ����.\n", user);
        return 1;
     }
     return 0;
}
