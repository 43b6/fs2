// made by ccat
// Ϊ����doctorȨ��..ֻ�����doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("��������", ({"ice item","item"}) );
        set("long",
"���������н����Զ������в���֮��ҩ,ר��ҩ��.\n"+
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
     if( (arg=="item" || arg=="ice item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
        cure = user->query_skill("cure");
        cure = cure /5;
        if( cure > 16)
        {
          message_vision("$N���Ž������Ƴ�ҩ��.\n", user);
          ob=new("/open/doctor/pill/ice_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷��������Ƴ�ҩ��.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
