inherit EQUIP;

void create()
{
     set_name("ħ����",({"evil robe","robe"}));
   set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
����˿�Ƴɵĺ���,��ħ�����ڵ�������֮��
\n");
        set("unit", "��");
	set("value",1000);
   set("material","cloth");
        set("armor_type", "cloth");
 set("armor_prop/armor",6);
         set("armor_prop/dodge", 2);
         set("armor_prop/blade", 1);
        }
        setup();
}
