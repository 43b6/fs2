inherit ITEM;
void create()
{
        set_name("�˺��Ӳ���", ({ "cure book","book" }));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
                        "����һ���й�ҽ����ҩ����鼮��.\n"
                        "�������ѧҽ���Ȿ�鵹ͦ�ʺϡ�.\n");
                set("value", 10);
                set("material", "paper");
                set("skill", ([
                "name":   "cure",       // name of the skill
                        "exp_required": 500,

 // to learn this skill.
                        "sen_cost":             30,

                        "difficulty":   30,

 // modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    26,

 // from this object.
                ]) );
        }
        setup();
}


