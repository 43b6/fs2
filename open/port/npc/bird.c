inherit NPC;

void create()
{
	set_name("��ȸ",({"bird"}));
        set("race", "Ұ��");
        set("age", 1);
        set("long", "
һ֧��ͨ����ȸ , ����֦ͷ�ϸ߸� .");
        set("str", 10);
        set("cor", 20);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "ͷ��", "����",  }) );
	set("chat_chance",10);
        set("chat_msg", ({
	(: this_object(),"random_move" :),
                       }) );
        setup();

}
