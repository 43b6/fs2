inherit COMBINED_ITEM;
void create()
{
        set_name("ǧ����֥", ({"thousand item","item"}) );
        set("long",
"�����ڰ׳�ɽ�ϵ���֥��������ȡ����ɽ�ϵ������\n"+
"�¾������������ɡ������ɸ�����ҽ�����ĵ��䣬��\n"+
"���������ҩ�衣\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value",1250000);
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
     if( (arg=="item" || arg=="thousand item") )
     {
        object user,ob;
        user = this_player();
        if(user->query("class")!="doctor")
        return notify_fail("��ְҵ����ҽ���޷�ҩ���Ƴ�ҩ��!!\n");
        cure = user->query_skill("cure");
        if( cure > 150)
        {
          message_vision("$N���Ž�ǧ����֥�Ƴ�ҩ�衣\n", user);
          ob=new("/open/mon/obj/mon-pill");
          ob->move(this_player());
          ob->add_amount(10);
          add_amount(-1);
         }else
          message_vision("$N��ҽ��̫��,�޷���ǧ����֥�Ƴ�ҩ�衣\n", user);
        return 1; 
     }
     return 0;   
}              

