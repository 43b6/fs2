inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "���Ŵ���");
  set ("long", @LONG

һ�����������Ϲ���һ����������ң���ͷд�Ŷ�����ĸ��֡�������
���������а���һ�Ŵ���̴ľ����һ������̴���Ӵ���ʯ���磬һ������
�߶�ߵ����̹�ͭ��������һ����ľ��д�š����������ɸ�����������
��ʮ�����ľȦ�Σ���ͷ������ʿ�˿ʯ���θ����ұߵ�ǽ�Ϲ���������
֮�ױ��������ͤ���������һ��ľ�壬������н𵶵��ӵ����а�
����list�������а�



LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"g1-4",
  "west" : __DIR__"g1-5.c",
  "east" : __DIR__"g1-6.c",
]));

  set("objects", ([ /* sizeof() == 1 */
 "/daemon/class/blademan/master_ba.c":1,
]));

  set("light_up", 1);
  set("valid_startroom",1);

  setup();
  call_other("/obj/board/gblade_b.c","????");
}
int valid_leave(object me,string dir)
{
        if(dir=="east"||dir=="west"||dir=="south")
        {
        if(me->query_temp("being-apprentice"))
        return notify_fail("�㻹�ڰ�ʦ�� , ��ȥ���� ?\n");
        return 1;
        }
}

void init() {
        add_action("do_billing","list");
}

int do_billing(string str) {
object *user,me;
        int i,j,k;

        user = users();
        me = this_player();

        for(i=j=0; i<sizeof(user); i++)
           if(user[i]->query("family/family_name") == "����" &&
              !wizardp(user[i]))
              user[j++] = user[i];

        if(str == "combat_exp") {
           call_out("do_exp",0,user,j);
           return 1;
        }
        else if(str == "force") {
           call_out("do_force",0,user,j);
           return 1;
        }
        else if(str == "gold-blade") {
           call_out("do_goldblade",0,user,j);
           return 1;
        }
        else
           return notify_fail("ʹ�ø�ʽ: list <����>\n"
                              "����ֵ(combat_exp)\n"+
                              "����(force)\n"+
                              "�Ͻ���������(gold-blade)\n\n");
}

int do_exp(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("combat_exp") > user[i]->query("combat_exp")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t���ž���ֵ���а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_force(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("max_force") > user[i]->query("max_force")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t�����������а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_goldblade(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if((int)user[k]->query_skill("gold-blade") > (int)user[i]->query_skill("gold-blade")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t�����Ͻ������������а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));
        printf("\n");
}
