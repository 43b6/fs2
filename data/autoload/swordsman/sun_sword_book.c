// blade_book.c

inherit ITEM;

void create()
{
	set_name("�����߾�����", ({ "sun_sword_book","book" }));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
    "����һ�������ɽ����������Ľ���, �������������ͼ��, ����������������\n");
		set("value", 10);
		set("material", "paper");
		set("skill", ([
			"name": "sun_fire_sword",		// name of the skill
                    //  "exp_required": 300000,
											// to learn this skill.
                        "sen_cost":     40,
                        "difficulty":   35,
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill": 99,
											// from this object.
		]) );
	}
        setup();
}


int query_autoload()
{
  if(!this_player()) return 0;
if(this_player()->query("family/family_name")=="�ɽ���" && this_player()->query("quest/sun_fire_sword",1)==1)
return 1;
}
