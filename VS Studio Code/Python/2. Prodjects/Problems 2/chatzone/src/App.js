import React from 'react';
import './App.css';
import 'package.json';

import firebase from 'firebase/app';
import 'firebase/firestore';
import 'firebase/auth';

import { useAuthState } from 'react-firebase-hooks/auth';
import { useCollectionData } from 'react-firebase-hooks/firestore';

firebase.initializeApp({
  apiKey: "AIzaSyA4p19HBooBFsC1aV35VwqF77q81YSN8D8",
  authDomain: "chatzone-4f6e5.firebaseapp.com",
  projectId: "chatzone-4f6e5",
  storageBucket: "chatzone-4f6e5.appspot.com",
  messagingSenderId: "28133398369",
  appId: "1:28133398369:web:03d71970788921488a9720",
  measurementId: "G-YBYTHCY07R"
})

const auth = firebase.auth();
const firestore = firebase.firestore();


function App() {

  const [user] = useAuthState(auth);

  return (
    <div className="App">
      <header className="App-header">



      </header>

      <section>
        {user ? <ChatRoom /> : <SignIn />}
      </section>
    </div>
  );
}

function SignIn() {
  const signInWithGoogle = () => {
    const provider = new firebase.auth.GoogleAuthProvider();
    auth.signInWithPopup(provider);
  }

  return(
    <button onClick={signInWithGoogle}>Sign in with Google</button>
  )
}

function SignOut() {
  return auth.currentUser && (

    <button onClick={() => auth.signOut()}>Sign Out</button>
  )
}

function ChatRoom() {

  const messagesRef = firestore.collection('messages');
  const query = messagesRef.orderBy('createdAt').limit(25);

  const [messages] = useCollectionData(query, {idField: 'id'});

  return(
    <>
      <div>
        {messages && messages.map(msg => <ChatMessage key={msg.id} message={msg} />)}

      </div>

      <div>

      </div>
    </>
  )
}

function ChatMessage(props) {
  const {test, uid} = props.message;

  return <p>{text}</p>
}

export default App;
