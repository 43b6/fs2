inherit EQUIP;

void create()
{
         set_name("����ѥ",({"boots"}));
          set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
������ֱ������������ѥ��...��
\n");
        set("unit","��");
	set("value",3000);
  set("material","boots");
        set("armor_type","boots");
	set("armor_prop/armor", 2);
     set("armor_prop/dodge",3);
     set("armor_prop/blade",4);
        }
        setup();
}
