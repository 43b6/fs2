// Ϊ����doctorȨ��..ֻ�����doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("�Ž�����",({"nine item","item"}) );
        set("long",
        "����������������Զ��̩ɽ������֮��ҩ,���Իָ�������.\n"+
        "�����뾭ҽ������(check item),����ʳ��.\n");
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
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="super item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
        cure = user->query_skill("cure");
        cure = cure /4;
      if( cure > 14)
        {
          message_vision("$N���Ž������Ƴ��鵤.\n", user);
          ob=new("/open/doctor/pill/nine_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷��������Ƴ��鵤.\n", user);
        return 1;
     }
     return 0;
}
