/* 1. */
#TextColor{
    color:red;
}
/* 2. */

/* 3. */
.myList{
border:solid;
}
/* 4. */
.myClass{
background-color:green;
}
/* 5. */
.otherClass.myClass{
color:white;
}
/* 6. */
#myId.otherClass{
background-color:yellow;}
/* Bonus */
#setColor{
border: solid pink
}

-----html----

<section>
  <h2>1. Text Color: Red</h2>
  <div>2. Color Green (hint: Sibling Selector)</div>
  <main>
    <ul class="myList">
      <li>
        3. Border Green
      </li>
    </ul>
    <div class="myClass">4. Background Green</div>
    <div class="myClass otherClass">
      5. Background Green & Color White
      (Hint Qualified Selector)
    </div>
    <div id="myId" class="otherClass">6. Background Yellow</div>
  </main>
  <ul>
    <li>
      Don't Style Me
    </li>
  </ul>
  <div>Bonus: Border Pink</div>
</section>