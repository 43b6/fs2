// Ϊ����doctorȨ��..ֻ�����doctor..check
// ��ɽ���ϸ�
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("��ɽ��˪��",({"ice_tree item","item"}));
        set("long",
        "�������������Ż��������Ѿ�ǧ��������ɽ����ֲ������ҩ�ݡ�\n"+
        "�˲ݶ������������������Ĺ�Ч,������Ҫ����(make)����ʹ�á�\n");
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
     if( (arg=="item" || arg=="ice_tree item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
       cure = user->query_skill("cure");
       cure = cure /4;
        if( cure > 10)
        {
          message_vision("$N���Ž���ɽ��˪���Ƴ����������.\n", user);
          ob=new("/open/common/obj/plaster2");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷�����˪���Ƴɶ�����\n", user);
        return 1;
     }
     return 0;
}

