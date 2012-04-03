// blade_book.c

inherit ITEM;

void create()
{
        set_name("��������", ({ "book" }));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
                        "����һ����ͽ����Ҫ���䱦, ֻ�����˵��˲����õõ�.\n");
                set("value", 10);
                set("material", "paper");
                set("skill", ([
                        "name":         "gamble",
                        "exp_required": 1,
                        "sen_cost":     30,
                        "difficulty":   30, // ���ܱ� 30 С
                        "max_skill":    39,
                ]) );
        }
        setup();
}

int valid_learn(object me)
{
  if (!me->query("quests/gamble_book")) return -1;
  else return 1;
} 
