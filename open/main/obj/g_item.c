// made by ccat
// Ϊ����doctorȨ��..ֻ�����doctor..check
inherit COMBINED_ITEM;
void create()
{
        set_name("������", ({"gin item","item"}) );
        set("long",
"���������컹����֮����,��Ҫ�뾭ҩʦ����(check item),\n"+
"����ʳ��(swallow pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value",1000);
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
     if( (arg=="item" || arg=="gin item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
        cure = user->query_skill("cure",1);
        cure = cure /4;
       if( cure > 10)
        {
          message_vision("$N���Ž��������Ƴɻ�����.\n", user);
          ob=new("/open/doctor/pill/g_pill");
          ob->move(user);
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷����������Ƴɻ�����.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
