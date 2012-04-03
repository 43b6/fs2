// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("������",({ "left guard","guard" }) );
	set("gender", "����" );
        set("age", 45);
        set("str", 40);
        set("cor", 60);
	set("cps", 25);
	set("int", 15);
	set("long","��������������,������ֵ����.\n");
	set("inquiry",([
	    "������" : "һ�����\n",
	    "нˮ" : "��������̫����,����������.\n",
	    "����" : "������Ҫ�õ��ٸ��ĵط�...\n",
	    ]));
	set("chat_chance", 10);
	set("chat_msg", ({
	    "������ ˵: �������,��������,ֻ��(нˮ)�ϲ���.\n",
	    "������ ˵: ����������Ҫ(����),���ҾͶ���.\n",
	    }));   
        set("combat_exp", 6000);
	set("attitude", "peaceful");
        set("max_force", 350);
        set("force_factor", 10);
        set("force", 350);
        set_skill("unarmed", 40);
	set_skill("parry", 40);
	set_skill("dodge", 40);
        set_skill("snow-martial", 24);
        map_skill("dodge","snow-martial");
        map_skill("unarmed","snow-martial");
	setup();
	add_money("silver",20);
        carry_object("/open/gsword/obj/ring")->wear();
        carry_object("/open/gsword/obj/robe_3")->wear();
        carry_object("/open/gsword/obj/legging")->wear();
         	
}
int accept_object(object me,object ob)
{
    if( ob->value() < 500 )
    {
      say("������ ˵:������һ�� 500...������,ͯ������...\n");
      return 1;
    }
    new("/open/gsword/obj/su_note")->move(me);
    say("����������һ��������.\n");
    return 1;
}
      
