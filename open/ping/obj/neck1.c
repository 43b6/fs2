// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("��»��", ({ "gold amulet", "amulet" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "������侭��̫�ϵ��˵�ʩ��, ���б�а��ħ�ķ���, �������ܻ����Ž�ߡ�\n");
	  set("unit", "��");
          set("value", 600);
          set("material", "cloth");
	  set("armor_type","neck");
          set("armor_prop/armor", 3);
	}
	setup();
}

