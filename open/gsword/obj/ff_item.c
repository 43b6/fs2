// made by ccat
// Ϊ����doctorȨ��..ֻ���doctor..check
// ��ʿ��������.����..��super item��force item���Ÿ�taoist
inherit COMBINED_ITEM;
void create()
{
        set_name("��ɽѩ��", ({"force item","item"}) );
        set("long",
"���������н�������ɽ��������֮��ҩ,����˳��ָ�����.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(swallow pill).\n");
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
                add_action("check_item","check");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="force item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor"&&user->query("class")!="taoist")
        return notify_fail("��ְҵ����ҽ�߻��ʿ�޷�ҩ���Ƴ�ҩ��!!\n");
        cure = user->query_skill("cure");
        cure = cure /4;
        if( cure > 14)
        {
          if(user->query("class")=="taoist")
           cure=cure/2;
          message_vision("$N���Ž���ɽѩ���Ƴ��鵤.\n", user);
          ob=new("/open/doctor/pill/ff_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷���ѩ���Ƴ��鵤.\n", user);
        return 1;
     }
     return 0;
}
