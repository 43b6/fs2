inherit PARTY_NPC;
void create()
{
           set_name("ʿ��", ({"soldier"}));
           set("age", 25);
           set("attitude","heroism");
           set("str", 28);
           set("per", 24);
           set("con", 55);
           set("cps", 20);
           set("cor", 21);
           set("combat_exp", 3000);
           set("force", 200);
           set_skill("parry", 20);
           set_skill("unarmed", 25);
           set_skill("dodge", 20);
           set_skill("henma-steps", 20);
           set_skill("lungshan", 25);
           map_skill("unarmed", "lungshan");
           map_skill("parry", "lungshan");
           map_skill("dodge", "henma-steps");
           set("chat_chance", 5);
           set("chat_msg", ({
                    "ʿ���ȵ�:��������!�ٿ������!��\n"}));
           set_temp("apply/attack", 10);
           set_temp("apply/armor", 10);
           setup();
           carry_object("/open/ping/obj/Ns_boots.c")->wear();
           carry_object("/open/ping/obj/Ns_armor.c")->wear();
           carry_object("/open/ping/obj/Ns_hat.c")->wear();
 }
