inherit NPC;

void create()
{
        set_name("����",({"wang yi","yi"}));
        set("long","
���ŵĳ�������ڵķ�ɫ���������Գ����ӵĽ��ʣ���Ȼ���ǽ��ŵ�
��ʽ���ӣ������������Ķ��ĿȾ��Ҳѧ���˼��м����ŵ���ʽ��
");
        set("gender","����");
	set("title","���ų���");
        set("combat_exp",2000);
        set("attitude","friendly");
        set("age",40);
	set_skill("stick",30);
	set_skill("parry",30);
        set_skill("dodge",25);
        setup();
        carry_object("/open/gsword/obj/robe.c")->wear();
	carry_object("/open/gblade/obj/broom1.c")->wield();
	add_money("coin",75);
}
