inherit NPC;
 
void create()
{
   set_name("�տպ���", ({"empty monk","monk"}));
   set("race", "����");
   set("age",70);
   set("long","��ɱ��Ĺ԰��������ĺ���, һ�����, ����Ī�⡣\n");
   set("str",55);
   set("cps",50);
   set("kar",50);
   set("spi",50);
   set("int",50);
   set("cor",50);
   set("con",50);
   set("limbs", ({"ͷ��", "�ز�", "�Ȳ�", "�ֱ�", "�β�", "��ֺ"}) );
   set("verbs", ({ "bite", "claw"}));
 
   set("attitude","herosim");
   set("combat_exp",650000);
   set("force_factor", 12);
   set("max_kee",3000);
   set("kee",3000);
   set("max_force",2000);
   set("force",2000);
  set("max_gin",1500);
  set("gin",1500);
  set("max_sen",1500);
  set("sen",1500);

   set_skill("force", 80);
   set_skill("dodge", 200);
   set_skill("blackforce", 80);
   set_skill("ghost-steps", 80);

   map_skill("force", "blackforce");
   map_skill("dodge", "ghost-steps");
 
   set("chat_chance",10);
   set("chat_msg", ({
   (: this_object(), "random_move" :),
" �տպ��г���: ��Ҳ��, ��Ҳ��, ��������������;\n
                ��Ҳ��, ��Ҳ��, ������׹Ϊ˭��?\n
                ��Ҳ��, ��Ҳ��, �������������!\n
                ��Ҳ��, ��Ҳ��, ��Ȫ·�ϲ����!\n
                ȨҲ��, ��Ҳ��, ת�ۻĽ���һ��!\n",
" �տպ�������: ���᱾����, �������̨;\n
                ������һ��, �δ��ǳ�����\n",
        }));

   setup();
}


