// sparrow.c by oda
// use in /open/center by powell

inherit NPC;

void create()
{
        set_name("С��ȸ", ({ "sparrow" }) );
        set("long", "һֻ̰�Ե�С��ȸ����Ž���ץ��һ����������Ķ�����\n������ȥ�ģ���ȫ������Σ�յĴ��ڡ�\n");
        set("race","Ұ��");
        set("age", 2);
        set("str", 8);
        set("con", 9);
        set("max_gin", 60);
        set("max_kee", 60);
        set("max_sen", 60);

        set("chat_chance", 4);
        set("chat_msg", ({
                "С��ȸ���������ϵ������ȫ�����µ����ӡ�\n",
        }) );
                
        set("combat_exp",80);
        setup();
        add_money("coin", 1);
}
