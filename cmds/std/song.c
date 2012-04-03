// /cmds/std/song.c
//
// wade �ڵ���ǰд���������˵�, 7/6/1996
// 
// ��һ����Ҫ�ĵ��� /obj/example/song.c
// ��д���ʱ����������, ���� 100 ��֮����Զ���������ĸ����õ�
// by wade 10/27/1996

#include <ansi.h>
 
int help (object);

int main(object me, string str)
{
  string        name, arg, *songs;
  object        song;

  if (!str) return help (me);

  if (sscanf (str, "%s %s", arg, name) != 2) arg = str;

  if (!arg) return help (me);

  if (catch (song = load_object ("/obj/example/song.c")))
    return notify_fail ("�Բ���, �㳪�����.\n");

  if (arg == "-e") {            // �༭����
    if (song->query_exist (name, me)) {
      write ("��Ҫд�ĸ��������Ѿ�д�˰�.\n");
      return 1;
    }
    me->set_temp ("song/����", name);
    write ("ԭ����: ");
    input_to ("set_songer", me);
  }
  else if (arg == "-d") {       // �������
    song->delete_song (name, me);
    write ("ɾ������.\n");
    return 1;
  }
  else if (arg == "-c") {       // ���
    if (song->play (name, me))
      write ("��ʼ�ݳ���.\n");
    else
      write ("û�����׸�, ��ѡ����.\n");
    return 1;
  }
  else if (arg == "-l") {       // �г����и���
    if (!name) {        // -l û�Ӹ�������
      if (songs = song->query_top (3, 0))
        me->start_more (sprintf ("��Ҫ�ĸ�����: %O\n", songs));
      else
        write ("�Բ����! û�鵽���ϵ�.\n");
    }
    else {              // -l �мӸ�������, ֻ�г��ø���
      if (song->query_songs (name))
        me->start_more (sprintf ("%O\n", song->query_songs (name)));
      else
        write ("û����Ҫ����������Ү.\n");
      return 1;
    }
  }
  else if (arg == "-t") {       // ����������
    if (songs = song->query_top (1, name))
      me->start_more (sprintf ("ǰʮ���Ľ��Ÿ�����: %O\n", songs));
    else
      write ("�Բ����! ����û�����н�����.\n");
  }
  else if (arg == "-n") {       // �ո���������
    if (songs = song->query_top (2, name))
      me->start_more (sprintf ("��Ҫ�ĸ�����: %O\n", songs));
    else
      write ("�Բ����! û�鵽���ϵ�.\n");
  }
  else if (arg == "-a") {       // ��ԭ����������
    if (songs = song->query_top (3, name))
      me->start_more (sprintf ("��Ҫ�ĸ�����: %O\n", songs));
    else
      write ("�Բ����! û�鵽���ϵ�.\n");
  }
  else if (arg == "-s" && name) {       // �ո���������
    if (songs = song->query_top (4, name))
      me->start_more (sprintf ("��Ҫ�ĸ�����: %O\n", songs));
    else
      write ("�Բ����! û�鵽���ϵ�.\n");
  }
  else return help (me);

  return 1;
}
 
// me �Ѹ��� str ��������б���. Ҫ���� edit() �б�д
// �ܸ�����Ϊ 100, �����Ļ�, ���ʹ�ô����͵��ߵ�.
void set_songer (string str, object me)
{
  if (!str) {
    me->delete_temp ("song");
    return;
  }
  me->set_temp ("song/ԭ����", str);
  write ("���¿�ʼ������, ÿ�����м�Ԥ����ͣ������, \n"
         "Ҫ����ͣ��ʱ��, ����������֮��д����.\n");

  me->edit ( (: call_other,__FILE__, "set_song", me :) );
}

// �������. ���ʵ����趨.
void set_song (object me, string str)
{
  string songer, name;
  object song;

  if (catch (song = load_object ("/obj/example/song.c"))) {
    me->delete_temp ("song");
    return;
  }

  if (song->song_number() >= 100)
    song->adjust();
  songer = me->query_temp ("song/ԭ����");
  name   = me->query_temp ("song/����");
  song->add_song (name, me, songer, str);

  write ("��ĸ��� -- "+name+" �Ѿ�¼�ƺ���.\n");
}

int help(object me)
{
  write(@HELP
�����﷨: song -e ����          <-- �༭һ������, ���Ҵ浵
          song -d ����          <-- ֻ�ܿ����Լ�д������
          song -c ����          <-- ���
          song -l [����]        <-- �г�Ŀǰ�ĸ����嵥, ���Ӹ����� == song -a
          song -t [N]           <-- �г�ǰ���������а�, Ԥ����ǰʮ��
          song -a [ԭ����]      <-- �г����ڸ�ԭ���ߵĸ�, ���ӵĻ���ԭ������
          song -s ��            <-- ��Ѱ���и��ֵ����и����嵥.
ע������:
          song -n 4     <-- ֻ�г������������ĸ�Ӣ���ֻ����������ֵ�
          song -n 4+    <-- ֻ�г��������ȱ��ĸ�Ӣ���ֻ����������ֳ���
          song -n 4-    <-- ֻ�г��������ȱ��ĸ�Ӣ���ֻ����������̵ֶ�
          song -n 4-10  <-- ֻ�г����������� 4 �� 10 ��Ӣ����֮���.
          ʹ�� song -l ���Բ��Ӳ���, ������Ҫ��ѯ��ϸ����Ҳ����.
          Ϊ����ȥ���˵Ĵ���, ���� set wait_edit
          ʹ�� song -e ��д������ʱ��, ÿ����֮ǰӦ���� delay ��Ŀ
          delay ��λ����, ����, delay ����ʡ��, ʡ�ԵĻ�, ϵͳԤ���� 3 ��
        �����о�һ������:
        2
        ���ְ���ΰ��
        ....
        3
        ֻҪ�ҳ���!
HELP
    );
    return 1;
}
