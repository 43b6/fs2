// Ϊ����doctorȨ��..ֻ�����doctor..check
// һ��ֻ�����ƶ���,������Ҫ��ߵ�ҽ�� cure 120 �� godcure 100��������!!!
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("�����", ({"sky item","item"}) );
        set("long",
        "��������ɽ����Ϊ��������ʥ��֮һ������ݡ�,\n"+
        "��˵�˲������������,���������ڴ�����,�ܽ��ܵ��ڴ�����,\n"+
        "�����뾭��ҽ�߾�տ��ҽ������������\n");
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
      if( cure > 159)
        {
          cure = 2;//һ�����ֻ����������
          message_vision("$N���Ž�������Ƴ��鵤.\n", user);
          ob=new("/open/doctor/pill/sky_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷���������Ƴ��鵤.\n", user);
        return 1;
     }
     return 0;
}


