// Ϊ����doctorȨ��..ֻ������doctor..check
// ��ʿ��������.����..��super item��force item���Ÿ�taoist
inherit COMBINED_ITEM;
void create()
{
        set_name("��ɽ��֥", ({"super item","item"}) );
        set("long",
"���������н�������ɽ������֮��ҩ,ר��Ѫ��ʧ��.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill)��\n");
        set("unit", "��");
        set("base_unit", "��");
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
     if( (arg=="item" || arg=="super item") )
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
          message_vision("$N���Ž���֥�Ƴ��ɵ�.\n", user);
          ob=new("/open/doctor/pill/f_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷�����֥�Ƴ��ɵ�.\n", user);
        return 1;
     }
     return 0;
}
