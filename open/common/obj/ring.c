inherit EQUIP;

void create()
{
        set_name("[1m[37m����ָ[0m", ({ "wedding ring", "ring"  }) );
        set("unit", "ֻ");
        set("long", "��������ᶨ�Ľ���ָ���׸���������ף�������ˡ�\n");
	set("armor_type", "finger");
	set("armor_prop/armor", 5 );
	set("material", "pearl");// �൱�� ??, ����������ֵ����
	set("no_drop",1);
	set("no_sell",1);
//	set("thunder",100);//������ף��,������������....:p
	set("no_put",1);
	set("light_up",-1);
	set_weight(1200);
	set("value",999);
	setup();
}

int query_autoload()
{
  return 1;
}
