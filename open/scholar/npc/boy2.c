// bookboy.c

#include <ansi.h>

inherit NPC;
void create()
{        
        set_name("��������", ({ "book boy", "boy" }) );
        set("family/family_name","����");
	set("gender", "����" );
        set("age", 10);
        set("str", 25);
	set("cor", 45);
	set("cps", 25);
        set("int", 30);
	set("long",
                "���ŵ�С����, Ҳ�����ŵ��½����ӡ�\n");
	set("combat_exp",717);
	set("attitude", "peaceful");
        set("chat_chance", 1);
	set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say ���ŵĵ���Խ��Խ����....") :),
                (: command ("say ϣ�����ŵ�����ͬ��Э��, �������ţ�") :),
	}) );
        set_skill("stabber", 20);
        set_skill("parry", 20);
        set_skill("knowpen", 15);
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        set_skill("unarmed", 15);
        set_skill("dodge", 25);
        set_skill("winter-steps", 15);
        map_skill("dodge","winter-steps");
	setup();
        add_money("silver", 5);
        carry_object("/obj/cloth")->wear();
        carry_object("/open/start/obj/pen")->wield();
}
