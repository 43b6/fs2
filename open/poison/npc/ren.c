inherit NPC;
void create()
{
        set_name("�ʰ���",({"huang-bo ren","ren",}));
        set("gender","����");
        set("age",40);
        set("str",45);
        set("bellicosity", 2000);
        set("title","����");
        set("long","����һ������ ,��ĳ��ԭ��ħ�̹����˵� ,�ٰ�������ϰ�òٺ��� ,
���Ϊ�˵صĺ��� !\n");
          set("combat_exp",700000);
        set("max_kee",1700);
        set("kee",1700);
        set("max_force",2000);
        set("force",2000);
        set_skill("unarmed",90);
        set_skill("parry",40);
        set_skill("dodge",40);
        set_skill("force",90);
        set_skill("badstrike",90);
        set_skill("black-steps",60);
        set_skill("badforce",80);
        map_skill("unarmed","badstrike");
        map_skill("parry","badstrike");
        map_skill("dodge","black-steps");
        map_skill("force","badforce");
        
        setup();
}

