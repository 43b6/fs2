// Ϊ����doctorȨ��..ֻ�����doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("ʮ�깣����",({"tree item","item"}));
        set("long",
        "�������������Ż�����������������Ĺ���,�����Ը��ֲ�ͬҩ��֮�ϳɷ�������,�й˱���Ԫ֮Ч,������������(�������check ��make ��������ҩ��\n�����뾭��ҽ�߾�տ��ҽ������������\n");
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
        {
                add_action("check_item","check_item");
                add_action("make_item","make");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="tree item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
       cure = user->query_skill("cure");
       cure = cure /3;
        if( cure > 10)
        {
          message_vision("$N���Ž�ʮ�깣�����Ƴɱ�����.\n", user);
          ob=new("/open/doctor/pill/life_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷��������Ƴɱ�����.\n", user);
        return 1;
     }
     return 0;
}

int make_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="tree item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴɸ�ҩ!!\n");
       cure = user->query_skill("cure");
       cure = cure /3;
        if( cure > 10)
        {
          message_vision("$N���Ž�ʮ�깣�����Ƴɽ�ҩ.\n", user);
          ob=new("/open/common/obj/plaster");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷��������Ƴɱ�����.\n", user);
        return 1;
     }
     return 0;
}
