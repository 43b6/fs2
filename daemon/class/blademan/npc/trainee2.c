inherit NPC;

void create()
{
seteuid(getuid());
         set_name("ħ�����ŵ���",({"trainee"}));
        set("gender", "����" );
        set("age", 19);
         set("long", "һλ�ռ���ħ���ŵĵ���..\n");
          set("combat_exp",15000);
        set_temp("apply/attack",10);
         set_skill("dodge",25);
         set_skill("parry",25);
         add_money("coin",200);
        setup();
}

