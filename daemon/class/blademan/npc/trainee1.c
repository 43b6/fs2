inherit NPC;

void create()
{
seteuid(getuid());
           set_name("ħ�����������",({"trainee"}));
        set("gender", "����" );
        set("age", 19);
           set("long", "ħ���ŵ����ֱ������..\n");
           set("combat_exp",30000);
        set_temp("apply/attack",10);
          set_skill("dodge", 35);
            set("max_force",100);
             set("force",100);
          set_skill("parry",35);
          set_skill("blade",35);
          set_skill("dragon-blade",20);
         map_skill("blade","dragon-blade");
         add_money("coin",200);
        setup();
carry_object("/daemon/class/blademan/obj/bl1.c")->wield();
carry_object("/daemon/class/blademan/obj/r1.c")->wear();
         add_money("silver", 50);
}

