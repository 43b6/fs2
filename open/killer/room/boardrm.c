#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "ɱ�ֱ�����");
  set("long", @LONG
           -------  ���ұ������Ҹ���ȫ����  --------
       ɱ����̳��Ŀǰ�����С�������κγ�棬�뾡�ٻر���
       �����湻��ֻ�Ļ������С�ɻ�͸¶һЩ��̳���ϡ�
       �ǡ�������̳��Ϊɱ����Ƶġ���ÿ��ģ���Ҫ��˵��ȥ��
       ��Ȼ���ȸĵ����ҿɲ��ܡ�������ڴ�����.....
       ��һ�Ե�(sign���ƺ��м���һЩ����
       ���κ������ɱ�֣���� help killer ����˵����
       ��list �����г���Ŀǰ���ϵ�ɱ�����а�
       ��want ���Բ��Ŀǰ���ϱ�ͨ����ɱ��ȫ��׷ɱ����ͷ

LONG);
        set("exits", ([ /* sizeof() == 1 */
            "north":__DIR__"r0.c",
            "south":__DIR__"floorm.c",
  ]));
set("item_desc", ([ /* sizeof() == 2 */
  
    "sign" : "������ɱ��ȫ��׷ɱ����ͷ�ߣ�����Ҷ��ɱ��(Ѫ������)\n",
   ]));
       setup();
        call_other("/obj/board/killerwizs_b","???");
}
int valid_leave(object me, string dir)
{
  if (me->query("class")!="killer" && dir=="north")
 return notify_fail("����ɱ�ֵĽ���!������û��������,�����޷�����!\n");

return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
  add_action("do_billing","list");
  add_action("do_check","want");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}

int do_billing(string str) 
{
        object *user,me;
        int i,j,k;

        user = users();
        me = this_player();

        for(i=j=0; i<sizeof(user); i++)
           if(user[i]->query("class") == "killer" && !wizardp(user[i]))
              user[j++] = user[i];

        if(str == "combat_exp") 
		{
           call_out("do_exp",0,user,j);
           return 1;
        }
        else if(str == "rain-throwing") 
		{
           call_out("do_rain",0,user,j);
           return 1;
        }
	else if(str == "manakee") 
		{
           call_out("do_makee",0,user,j);
           return 1;
        }
        else if(str == "shadow-kill") 
		{
           call_out("do_shadow",0,user,j);
           return 1;
        }
        else
           return notify_fail("ʹ�ø�ʽ: list <����>\n"
                              "����ֵ(combat_exp)\n"+
			      "ħ��ɱ(manakee)\n"+	
                              "��Ӱذ��(shadow-kill)\n"+
                              "�����ڻ�(rain-throwing)\n\n");
}
//query_function("manakee");
int do_check(string str) 
{
    object *user,me,cme,croom;
    int i,j,k;

    user = users();
    me = this_player();
	
	if (!str)
	{
    	for(i=j=0; i<sizeof(user); i++)
      		if(user[i]->query("title") == HIR"ɱ��ȫ��׷ɱ����ͷ"NOR)
          		user[j++] = user[i];
        printf(HIG"\t\tɱ��ȫ��׷ɱ����ͷͨ����:\n\n"NOR);
        for(i=0; i<j; i++)
        {
			cme=find_player(user[i]->query("id"));
			croom=environment(cme);
           tell_object(this_player(),
              sprintf(HIC"\t%2d �� %s(%s) �� %-18s \n"NOR,i+1,
                      user[i]->query("name"),
                      user[i]->query("id"),
						croom->query("short") ) );
		 }
        printf("\n");
return 1;
	}
	return notify_fail("��Ҫ�Ҽ�ָ��������������Ҫ���ִ�\n");
}

int do_exp(object *user,int j) 
{
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

        printf(HIG"\t\t����������ֵ���а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_makee(object *user,int j) 
{
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
if(user[k]->query("functions/manakee/level") > user[i]->query("functions/manakee/level"))
{
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\tɱ��ħ��ɱ�ȼ����а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_rain(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query_skill("rain-throwing",1) > 
					user[i]->query_skill("rain-throwing",1)) 
				{
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t�����������ڻ����а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_shadow(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if((int)user[k]->query_skill("shadow-kill",1) > 
					(int)user[i]->query_skill("shadow-kill",1)) 
			   {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t ��������Ӱذ�����а�:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t��%2d��       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));
        printf("\n");
}
