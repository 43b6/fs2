inherit EQUIP;

void create()
{
         set_name("�����Ѿ���",({"girl robe","robe"}));
     set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�ഫ���Ѿ�����ʱ�����ķ�Ʒ����������Ƥ������˿���Ƴɣ����������ʡ�
\n");
        set("unit", "��");
        set("value",10000);
 set("material","cloth");
        set("armor_type", "cloth");
     set("armor_prop/armor",10);
      set("armor_prop/dodge", 4);
      set("armor_prop/parry",5);
        }
        setup();
}
