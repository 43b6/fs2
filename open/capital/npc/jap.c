
inherit NPC;

void create()
{
	set_name("��ɣ����", ({ "jap" }) );
	set("race", "����");
	set("age", 22);
	set("long",@LONG
	һ��Ʋ����λ���ֵ����ŷ��Σ��������Щ���Ц��ȴ����Щ��
	��������������������������������˴����Զ�Ӷ�孶ɺ�����
	����֪������Ŀ��Ϊ�Ρ�
LONG);
						
	set("attitude", "peaceful");
	set("str", 33);
	set("cor", 30);
	set("combat_exp", 1500);
	set("chat_chance", 6);
	set("chat_msg", ({
 	   (: this_object(), "random_move" :),
 	    "˽���ձ��ˡ���������������\n"}) );
	set_skill("dodge",10);
	set_temp("apply/armor", 3);
	setup();
	carry_object("/open/capital/obj/katana.c")->wield();			
}
