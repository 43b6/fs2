inherit EQUIP;

void create()
{
        set_name("����ѥ",({"flt-steps boots","boots"}) );
        set_weight(1200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
һ˫����ѥ�ӣ��ƺ������ṩʲô��������������������������ŵ�
�����Ṧ�Ļ�......
\n");
        set("unit","˫");
	set("value",2000);
        set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/dodge",7);
        }
        setup();
}
int wear()
{
     if ((string)this_player()->query_skill_mapped("dodge") !="fly-steps")
           return notify_fail("�㲻����Ҫ��һ˫ʲô��������û�е�Ь�Ӱɣ�\n");
     else {
           ::wear();
          
          }
     return 1;
}

