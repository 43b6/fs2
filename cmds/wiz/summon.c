// summon command..
// Closed by wade Tue Sep 26 1995

inherit F_CLEAN_UP;

int main(object me, string str)
{
  object ob;
  string wiz;

  ob = LOGIN_D->find_body(str);
  if (!ob) return notify_fail("��... ���������?\n");
  wiz = (string)wizhood (me);
  // ������� summon ����
  if ( (!wizardp(ob) && ob->query("id")!="guest" && wiz_level(me)<4) || wiz_level (me) < wiz_level (ob) )
    return notify_fail ("��ϵͳ��: ��� Summon �����ǲ���ò��, ������ goto ��!!\n");
  else {
        if (!str) return notify_fail("�﷨: summon <��ҵ�Ӣ����>\n");
        ob = LOGIN_D->find_body(str);
        if (!ob) return notify_fail("��... ���������?\n");
        // moving
        if (environment(ob)) {
          log_file("static/SUMMON",
          sprintf ("%s - ץ - <%s>\n%s -- ץ�� --> %s\n%s\n\n",
                me->short(), ob->short(),
                file_name(environment(ob)),
                file_name(environment(me)),
                ctime(time())));
          tell_room(environment(ob),"��������һֻ���ְ�"+
          (string)ob->query("name")+"ץ������, Ȼ�󲻼���.\n", ob);
        }
        tell_object(ob,"һֻ�ְ���ץ������, ����ǰһ���....\n");
        ob->move(environment(me));
        tell_object(me, "���"+(string)ob->query("name")+"ץ�������ǰ.\n");
        tell_object(ob,".... ����ʱ������"+(string)me->query("name")+
        "����Ū������.\n");
        tell_room(environment(ob),(string)ob->query("name")+"ͻȻ����"+
        "������ǰ\n",({me,ob}));
        // ok ..
        return 1;
  }
}

