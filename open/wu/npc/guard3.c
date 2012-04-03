// master_jen.c

inherit NPC;
inherit F_MASTER;


void create()
  {
        set("class", "fighter");
        set_name("�����", ({ "fon jen", "fon", "jen" }) );
        set("title","��ɽ�ɵ��ߴ�����");
        set("nickname", "��ɽ˫��");
        set("gender", "����");
        set("age", 42);
        set("attitude", "peaceful");
        set("long",
"�����������������ѧ�����У����������ͬ��ʦ�ֵܣ�����ѧ������˵�������粻������\n"
"����ɽ�ɸ�������ͳ���ɽ˫����\n");
        set("str", 40);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("env/���","YES");
        set("kar", 16);
        set("combat_exp",900000);
        set("force"       , 3000);
        set("max_force"   , 2000);
        set("force_factor", 20);
        set("score"       , 200000);
        set_skill("move",90);
        set_skill("unarmed", 100);
        set_skill("force", 90);
        set_skill("parry", 80);
        set_skill("dodge",80);
        set_skill("henma-steps",100);
        set_skill("lungshan",90);
        set_skill("haoforce",90);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "lungshan");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :)
        }));
        setup();
        carry_object("/open/wu/obj/armband")->wear();
        carry_object("/open/wu/obj/silverfinger")->wield();
        carry_object("/open/wu/obj/yol_key");
        add_money("gold",10);
}
