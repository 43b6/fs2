// post.c
//
// �Դ浵�ķ�ʽ����ʵ��
// �󲿷ݹ��ܶ����� /player/BBS.c �С�
// wade@Fantasy.Space 12/16/1999
#include <BBS.h>

// ����ϵͳ�ṩ�� ed() ����֮�󣬻� call back �˺���
// ����������
void ed_exit()
{
  int   t;
  string fn, buf, board;
  string title, auth;
  int    mark;
  string sigfn,sig,myid;
  object BBS;

  seteuid(ROOT_UID);
  if (!objectp (BBS=find_object (BBS_OBJ))) {
    write ("BBS ϵͳ��û����������ʦ�鿴һ��!!\n");
    return;
  }
  // board ������뿴�İ��棬���� select ѡ��
  if (!stringp (board = this_player()->query("post/board"))) {
    write ("��û��ѡ����棬���� select �趨��\n");
    return;
  }
  // ������һ�㣬Ӧ���ڽ�������֮ǰ���Ѿ��趨���ˡ�
  fn = this_player()->query("post/fn");
  sscanf (fn, "%d.%s.%d.%s", t, auth, mark, title);

  // ���µĹ�����ȡ��ǩ��������֮���ڲ������
  // DATA_DIR �Ƕ����� /include/globals.h �е�
  myid = this_player()->query("id");
  sigfn = sprintf ("%s/sig/%s/%s.sig",DATA_DIR,myid[0..0],myid);
  if (sig = read_file (sigfn))
    buf = read_file (BBS_TMP+fn) + "\n--\n" + sig;
  else
    buf = read_file(BBS_TMP+fn);
  // ɾ��ԭ�ȵ���ʱ����
  // ���Կ�������һ�ֹ��ܣ���ʱ�༭��һ����ߣ�������ʱ��
  // �Ϳ���ֱ�ӱ༭����ʱ����Ŀǰ��û��ʵ����һ���ܡ�
  rm (BBS_TMP+fn);

  BBS->post_it (board, fn, buf, t, auth, mark, title);
  printf ("%s:%s\n", ctime (t), title);
  // ��˵�������������ͷż����塣
  buf = 0;
}

int help();

int main(object me,string title)
{
  string  fname, board;
  int     t;

  if (!title) return help();
  if (strlen (title) > 40) title = title[0..40];
  if (undefinedp (board = me->query ("post/board"))) {
    write ("��ʹ�� select �����趨Ҫ����һ���������ʹ�ñ����\n");
    return 1;
  }

  t = time();
  // ������ time.auth.mark.title
  // time  �� post ��ʱ��
  // auth  �� post �ߵ� id
  // mark  �� �Ƿ��ɾ����Ԥ���� 0 <-- ����ɾ��
  // title �� �ǲ��������
  fname = t + "." + me->query("id") +  ".0." + title;
  // ֮��������������ϣ�����Ϊ���к�������
  me->set ("post/fn", fname);

  // �Ȱѵ���������ʱĿ¼ BBS_TMP
  ed (BBS_TMP+"/"+fname, "ed_exit");
  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : post <����>
ָ��˵�� :
           ���������������棬�ǲ���ϵͳ�ṩ�ı༭����
	��һ����ʦ���ڱ༭����ʱ�õı༭��һ������:
           post test

�����ο� :
      1. ��������ʱ������ð��ģʽ�°� h ȡ������˵����
      2. ������������ǩ����ʹ�ã���ο� sig ���
HELP
    );
    return 1;
}
